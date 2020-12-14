import cv2
import rospy
from std_msgs.msg import String


def getImage2(IP):
	TopCameraAddress = IP
	#SideCameraAddress = 'http://192.168.x.xxx/video.cgi'
	cap0 = cv2.VideoCapture(TopCameraAddress) #VideoCapture from source 0
	while 1:
	  ret0, frame0 = cap0.read() #Read next frame

	  cv2.imshow('Top',frame0) #Show the frame
	  pub = rospy.publisher('TopicName', String, queue_size=10)
	  rospy.init_node('talker', anonymous=True) #anonymous sikre at navnet er unikt
	  rate = rospy.Rate(1)


while not rospy.is_shutdown():
	hello_str = "hello world %s" % rospy.get_time()
	rospy.loginfo(hello_str)
	pub.publish(hello_str)

	



#getImage('http://192.168.1.100/video.cgi')