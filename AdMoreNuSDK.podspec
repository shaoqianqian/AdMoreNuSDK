Pod::Spec.new do |s|
  s.name             = 'AdMoreNuSDK'
  s.version          = '3.4.7'
  s.summary          = 'AdMore adapter for Taku mediation.'
  s.description      = 'A lightweight .framework adapter to integrate AdMore with sdk mediation.'
  s.homepage         = 'https://github.com/shaoqianqian/AdMoreNuSDK.git'
  s.license          = { :type => 'MIT' }
  s.author           = { 'AdMore' => '1007647034@qq.com' }
  s.source           = { :git => 'https://github.com/shaoqianqian/AdMoreNuSDK.git', :tag => s.version }

  s.platform         = :ios, '12.0'
  s.vendored_frameworks = 'AdMoreMAX.framework'
  s.swift_version    = '5.0'
end
