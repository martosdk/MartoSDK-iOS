Pod::Spec.new do |spec|
  spec.name         = "MartoSDK"
  spec.version      = "1.11.0"
  spec.summary      = "A short description of MartoSDK for iOS."
  spec.description  = <<-DESC
            MartoSDK
                   DESC
  spec.homepage     = "https://github.com/martosdk/MartoSDK-iOS"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "martosdk" => "jeden.huang@tec-do.com" }
  spec.source       = { :git => "https://github.com/martosdk/MartoSDK-iOS.git", :tag => spec.version.to_s }
  spec.platform     = :ios, '13.0'
  spec.ios.deployment_target = '13.0'
  spec.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-ObjC'
  }
  valid_archs = ['x86_64', 'arm64']
  spec.default_subspecs = 'MartoSDK'

  spec.subspec 'MartoSDK' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = ['MartoSDK.xcframework']
     ss.resources = ['MartoSDKResources.bundle']
  end
end
