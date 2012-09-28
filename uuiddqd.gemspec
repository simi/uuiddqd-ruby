# -*- encoding: utf-8 -*-
require File.expand_path('../lib/uuiddqd/version', __FILE__)

Gem::Specification.new do |gem|
  gem.authors       = ["Josef Šimánek"]
  gem.email         = ["retro@ballgag.cz"]
  gem.description   = %q{Ruby libuuid}
  gem.summary       = %q{Little Ruby experiment}
  gem.homepage      = "https://github.com/simi/uuiddqd"

  gem.files         = `git ls-files`.split($\)
  gem.executables   = gem.files.grep(%r{^bin/}).map{ |f| File.basename(f) }
  gem.test_files    = gem.files.grep(%r{^(test)/})
  gem.name          = "uuiddqd"
  gem.require_paths = ["lib"]
  gem.version       = Uuiddqd::VERSION

  # specify any dependencies here; for example:
  gem.add_development_dependency "rake-compiler"
end
