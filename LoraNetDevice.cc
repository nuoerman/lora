#include "LoraNetDevice.h"
void LoraNetDevice::Receive(Ptr<Packet>p,uint32_t nodeID)
{
	  //调用数据包的拷贝函数，获得新的数据包，并获得设备的ID号。
	  //解析就结束了
	  //这个函数是在channel中调用的，channel
	  std::cout<<"接受到数据包占位"<<"收到来自id="<<nodeid<<"的数据包"<<endle;	
}
Ptr<Node> LoraNetDevice::GetNode()
{
	if(node_index.size()==0)
		return NULL;
	else
		return node_index;
}
int LoraNetDevice::bind(Ptr<Lorachannel> channel_m)
{
	//绑定channel
	//std::vector<LoraChannel*> LoraChannel;
	if(LoraChannel.size()!=0)
	{
		std::<<"error"<<"不用再绑定了，已经完成了该netdevice设备的绑定"<<endl;
		return 0;
	}
	else
	{
		LoraChannel=channel_m;
		std::<<"info"<<"绑定netdevice到channel"<<endl;
		return 1;
	}

}

int LoraNetDevice::bind(Ptr<Node>nodeptr)
{
	if(node_index.size()!=0)
	{
		std::cout<<"error"<<"netdevice已经完成绑定node"<<endl;
		return 0;
	}
	else
	{
		node_index=nodeptr;
		std::cout<<"info"<<"netdevice绑定到channel"<<end;
		return 1;
	}

}

int  LoraNetDevice::Send (Ptr<Packet> packet_re)
{
	//因为netdevice是有channel的指针的，所以是可以在这里封装channel的send
	
		//std::vector<LoraChannel*> LoraChannel;
		//bool LoraChannel::TransmitStart (Ptr< Packet > p, uint32_t srcId)
		LoraChannel->TransmitStart(packet_re,(node_index->GetId()));
		
}