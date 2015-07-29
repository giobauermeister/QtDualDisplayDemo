#!/bin/bash

killall -SIGINT gst-launch-0.10

if [ -z "$1" ]; then
	#killall -SIGINT gst-launch-0.10
	echo -e "\n!! chose a video to play ./argument.sh video1 !!\n"
else

if [ $1 == 'video1' ]; then 

gst-launch filesrc location=/home/root/resources/video1.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080 

else
	if [ $1 == 'video2' ]; then 

gst-launch filesrc location=/home/root/resources/video2.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

	else
		if [ $1 == 'video3' ]; then 

gst-launch filesrc location=/home/root/resources/video3.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

		else
			if [ $1 == 'video4' ]; then 

gst-launch filesrc location=/home/root/resources/video4.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

			else
				if [ $1 == 'video5' ]; then 

gst-launch filesrc location=/home/root/resources/video5.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

				else
					if [ $1 == 'video6' ]; then 

gst-launch filesrc location=/home/root/resources/video6.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

					else
						if [ $1 == 'video7' ]; then 

gst-launch filesrc location=/home/root/resources/video7.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

						else
							if [ $1 == 'video8' ]; then 

gst-launch filesrc location=/home/root/resources/video8.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

							else
								if [ $1 == 'video9' ]; then 

gst-launch filesrc location=/home/root/resources/video9.mp4 typefind=true ! aiurdemux ! vpudec ! mfw_v4lsink device=/dev/video18 disp-width=1920 disp-height=1080

								fi
	
							fi
								
			
						fi
	
			
					fi
	
			
				fi
	
		
			fi
	
		
		fi

		
	fi

fi

fi


