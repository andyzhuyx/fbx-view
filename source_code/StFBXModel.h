//----------------------------------------------------------------
#ifndef _StFBXModel_h_
#define _StFBXModel_h_
//----------------------------------------------------------------
#include "StFBXDefine.h"
//----------------------------------------------------------------
class StFBXModel
{
	friend class StFBXManager;
public:
	StFBXModel();
	~StFBXModel();

	const StFBXMeshData* GetMeshData() const;
	const StFBXControlPointGroup* GetControlPointGroup() const;
	const StFBXBoneGroup* GetBoneGroup() const;
	const StFBXModelAnimation* GetAnimation() const;
	//
	const StFBXMeshData* GetAnimationMeshData(float fTime);
	//Ŀǰģ����ֻ��һ����������ȡ�������ж��ٸ��ؼ�֡��
	int GetKeyFrameCount() const;
	void CalculateMeshDataByKeyFrame(const int nKeyFrameIndex);
	float GetAnimTimeLength();
	//����Mesh�İ�Χ�С�
	void CalculateMeshBoundingBox(SoMathFloat3* pMinPos, SoMathFloat3* pMaxPos);
	
protected:
	StFBXMeshData* GetMeshData_Modify();
	StFBXControlPointGroup* GetControlPointGroup_Modify();
	StFBXBoneGroup* GetBoneGroup_Modify();
	StFBXModelAnimation* GetAnimation_Modify();

private:
	//�������ݺ������Mesh������Ⱦ��������Ĭ�ϵ�Pose��
	//��ִ��CalculateMeshDataByKeyFrame()�������Mesh���ݾͱ����ָ��֡��Pose��
	StFBXMeshData m_kMeshData;
	StFBXControlPointGroup m_kControlPointGroup;
	StFBXBoneGroup m_kBoneGroup;
	StFBXModelAnimation m_kAnimation;
};
//----------------------------------------------------------------
#endif
//----------------------------------------------------------------
