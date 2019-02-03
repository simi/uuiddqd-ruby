require 'bundler/setup'
require 'benchmark/ips'
require 'uuiddqd'
require 'uuidtools'
require 'securerandom'

Benchmark.ips do |x|
  x.report('uuiddqd')      { Uuiddqd.generate }
  x.report('uuidtools')    { UUIDTools::UUID.random_create.to_s }
  x.report('securerandom') { SecureRandom.uuid }

  x.compare!
end
