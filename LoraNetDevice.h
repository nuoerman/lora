#include"LoraNetDevice.h"

class LoraNetDevice
{
	
public:
	Receive(Ptr<Packet>p,Ptr<LoraNetDevice>sender );
	//void ns3::CsmaNetDevice::Receive(Ptr<Packet>p,Ptr<CsmaNetDevice>sender )
	int bind(LoraNode *nodeptr,int LoraNodeID);//���豸���ص���ǰ�������豸��	
	LoraNode * LoraNetDevice::GetNode ();
	int LoraNetDevice::bind(LoraNode *nodeptr);
	int 
private:	
		//�Լ��ǹ����Ǹ�node�����	
		std::vector<LoraNode*> node_index;
		//�Լ���channel
		std::vector<LoraChannel*> LoraChannel;


}