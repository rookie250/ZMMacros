Pod::Spec.new do |s|

  s.name             = 'ZMMacros'
  s.version          = '0.1.1'
  s.summary          = 'iOS 通用宏'

  s.description      = <<-DESC
    iOS 通用宏.
                    DESC

  s.homepage         = 'https://github.com/rookie250/ZMMacros'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhouming' => 'mmix1009@163.com' }
  s.source           = { :git => 'https://github.com/rookie250/ZMMacros.git', :tag => s.version }

  s.ios.deployment_target = '9.0'

  s.source_files = 'ZMMacros/Classes/**/*'

end
