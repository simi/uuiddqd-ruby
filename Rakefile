require 'bundler'
require 'rake/testtask'
require 'rake/clean'
require 'rake/extensiontask'

Bundler::GemHelper.install_tasks
Rake::ExtensionTask.new('uuiddqd')

desc "Build eventmachine, then run tests."
task :default => [:clean,:compile, :test]

Rake::TestTask.new(:test) do |t|
  t.libs << 'test'
  t.pattern = 'test/**/*_test.rb'
end

