import cv2
import rospy
from std_msgs.msg import String

def listener():
	rospy.Subscriber("TopicName", String)

	# spin() simply keeps python from exiting until this node is stopped
	rospy.spin()