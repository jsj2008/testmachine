GO_EASY_ON_ME = 1


include theos/makefiles/common.mk

TWEAK_NAME = testmachine
testmachine_FILES = Tweak.xm \
  server/HTTPServer.m \
  server/AsyncSocket.m \
  server/HTTPConnection.m \
  server/HTTPResponse.m \
  server/AsyncSocket.m \
  server/DDRange.m \
  server/HTTPAuthenticationRequest.m \
  server/DDData.m \
  server/DDNumber.m \
  server/DDRange.m \
  brominet/XPathQuery.m \
  brominet/NSObject+ClassName.m \
  brominet/UIApplication+XMLDescription.m \
  brominet/UIView+XMLDescription.m \
  KIF/Additions/CGGeometry-KIFAdditions.m \
  KIF/Additions/NSFileManager-KIFAdditions.m \
  KIF/Additions/UIAccessibilityElement-KIFAdditions.m \
  KIF/Additions/UIApplication-KIFAdditions.m \
  KIF/Additions/UIScrollView-KIFAdditions.m \
  KIF/Additions/UITouch-KIFAdditions.m \
  KIF/Additions/UIView-KIFAdditions.m \
  KIF/Additions/UIWindow-KIFAdditions.m \
  NSData+Base64.m \
  TestMachine.m \
  IosDriver.m \
  AppHTTPConnection.m \
  Visualizer.m


testmachine_CFLAGS = -I. -Iserver -Ibrominet -IKIF/Additions

testmachine_LDFLAGS = -lxml2

testmachine_FRAMEWORKS = UIKit CFNetwork AVFoundation AudioToolbox MediaPlayer

include $(THEOS_MAKE_PATH)/tweak.mk

