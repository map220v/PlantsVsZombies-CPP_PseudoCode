// Class: TimeLineTrack<float>


/* TimeLineTrack<float>::GetValueAt(float) const */

undefined1  [16] __thiscall
TimeLineTrack<float>::GetValueAt(TimeLineTrack<float> *this,float param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar2 = FUN_03aeef88(uVar5,*(undefined8 *)(this + 0x10));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    lVar4 = (long)iVar2;
    iVar1 = iVar2;
    do {
      puVar3 = (uint *)FUN_03aeef9c(uVar5,lVar4);
      if ((float)puVar3[1] <= param_1) {
        if (iVar1 != iVar2) {
          uVar5 = FUN_03aeef9c(uVar5,(long)(iVar1 + 1));
          auVar6._0_4_ = CurveEvaluate<float>(puVar3,uVar5,puVar3[2]);
          auVar6._4_4_ = extraout_var;
          auVar6._8_8_ = extraout_var_00;
          return auVar6;
        }
        return ZEXT416(*puVar3);
      }
      iVar1 = iVar1 + -1;
      lVar4 = lVar4 + -1;
    } while (iVar1 != -1);
  }
  return ZEXT416(*(uint *)this);
}


/* TimeLineTrack<float>::Initialize(float) */

void __thiscall TimeLineTrack<float>::Initialize(TimeLineTrack<float> *this,float param_1)

{
  *(float *)this = param_1;
  std::vector<TimeLineKeyFrame<float>,std::allocator<TimeLineKeyFrame<float>>>::clear
            ((vector<TimeLineKeyFrame<float>,std::allocator<TimeLineKeyFrame<float>>> *)(this + 8));
  return;
}


/* TimeLineTrack<float>::~TimeLineTrack() */

void __thiscall TimeLineTrack<float>::~TimeLineTrack(TimeLineTrack<float> *this)

{
  std::vector<TimeLineKeyFrame<float>,std::allocator<TimeLineKeyFrame<float>>>::~vector
            ((vector<TimeLineKeyFrame<float>,std::allocator<TimeLineKeyFrame<float>>> *)(this + 8));
  return;
}


/* TimeLineTrack<float>::AddKeyFrame(float, float const&, CurveType) */

void __thiscall
TimeLineTrack<float>::AddKeyFrame
          (undefined4 param_1,TimeLineTrack<float> *this,undefined4 *param_2,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_03aeef88(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  std::vector<TimeLineKeyFrame<float>,std::allocator<TimeLineKeyFrame<float>>>::resize
            ((vector<TimeLineKeyFrame<float>,std::allocator<TimeLineKeyFrame<float>>> *)(this + 8),
             lVar2 + 1);
  uVar4 = *(undefined8 *)(this + 8);
  lVar2 = FUN_03aeef88(uVar4,*(undefined8 *)(this + 0x10));
  puVar3 = (undefined4 *)FUN_03aeefa8(uVar4,lVar2 + -1);
  uVar1 = *param_2;
  puVar3[2] = param_4;
  puVar3[1] = param_1;
  *puVar3 = uVar1;
  return;
}


/* TimeLineTrack<int>::Initialize(int) */

void __thiscall TimeLineTrack<int>::Initialize(TimeLineTrack<int> *this,int param_1)

{
  *(int *)this = param_1;
  std::vector<TimeLineKeyFrame<int>,std::allocator<TimeLineKeyFrame<int>>>::clear
            ((vector<TimeLineKeyFrame<int>,std::allocator<TimeLineKeyFrame<int>>> *)(this + 8));
  return;
}


/* TimeLineTrack<Sexy::SexyVector3>::Initialize(Sexy::SexyVector3) */

void TimeLineTrack<Sexy::SexyVector3>::Initialize
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,SexyVector3 *param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::SexyVector3::operator=(param_4,(SexyVector3 *)&local_10);
  std::
  vector<TimeLineKeyFrame<Sexy::SexyVector3>,std::allocator<TimeLineKeyFrame<Sexy::SexyVector3>>>::
  clear((vector<TimeLineKeyFrame<Sexy::SexyVector3>,std::allocator<TimeLineKeyFrame<Sexy::SexyVector3>>>
         *)(param_4 + 0x10));
  return;
}


/* TimeLineTrack<int>::GetValueAt(float) const */

int __thiscall TimeLineTrack<int>::GetValueAt(TimeLineTrack<int> *this,float param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar2 = FUN_03bb57f0(uVar5,*(undefined8 *)(this + 0x10));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    lVar4 = (long)iVar2;
    iVar1 = iVar2;
    do {
      piVar3 = (int *)FUN_03bb5874(uVar5,lVar4);
      fVar6 = (float)piVar3[1];
      if (fVar6 <= param_1) {
        if (iVar1 != iVar2) {
          lVar4 = FUN_03bb5874(uVar5,(long)(iVar1 + 1));
          iVar2 = CurveEvaluate<int>((param_1 - fVar6) / (*(float *)(lVar4 + 4) - fVar6),piVar3,
                                     lVar4,piVar3[2]);
          return iVar2;
        }
        return *piVar3;
      }
      iVar1 = iVar1 + -1;
      lVar4 = lVar4 + -1;
    } while (iVar1 != -1);
  }
  return *(int *)this;
}


/* TimeLineTrack<Sexy::SexyVector3>::TimeLineTrack() */

void __thiscall
TimeLineTrack<Sexy::SexyVector3>::TimeLineTrack(TimeLineTrack<Sexy::SexyVector3> *this)

{
  DVec3::DVec3((DVec3 *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* TimeLineTrack<int>::~TimeLineTrack() */

void __thiscall TimeLineTrack<int>::~TimeLineTrack(TimeLineTrack<int> *this)

{
  std::vector<TimeLineKeyFrame<int>,std::allocator<TimeLineKeyFrame<int>>>::~vector
            ((vector<TimeLineKeyFrame<int>,std::allocator<TimeLineKeyFrame<int>>> *)(this + 8));
  return;
}


/* TimeLineTrack<Sexy::SexyVector3>::~TimeLineTrack() */

void __thiscall
TimeLineTrack<Sexy::SexyVector3>::~TimeLineTrack(TimeLineTrack<Sexy::SexyVector3> *this)

{
  std::
  vector<TimeLineKeyFrame<Sexy::SexyVector3>,std::allocator<TimeLineKeyFrame<Sexy::SexyVector3>>>::
  ~vector((vector<TimeLineKeyFrame<Sexy::SexyVector3>,std::allocator<TimeLineKeyFrame<Sexy::SexyVector3>>>
           *)(this + 0x10));
  return;
}


/* TimeLineTrack<Sexy::SexyVector3>::GetValueAt(float) const */

undefined4 __thiscall
TimeLineTrack<Sexy::SexyVector3>::GetValueAt(TimeLineTrack<Sexy::SexyVector3> *this,float param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_10;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar2 = FUN_03bb5810(uVar5,*(undefined8 *)(this + 0x18));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    lVar4 = (long)iVar2;
    iVar1 = iVar2;
    do {
      puVar3 = (undefined8 *)FUN_03bb5868(uVar5,lVar4);
      fVar7 = *(float *)((long)puVar3 + 0xc);
      if (fVar7 <= param_1) {
        if (iVar1 != iVar2) {
          lVar4 = FUN_03bb5868(uVar5,(long)(iVar1 + 1));
          uVar6 = CurveEvaluate<Sexy::SexyVector3>
                            ((param_1 - fVar7) / (*(float *)(lVar4 + 0xc) - fVar7),puVar3,lVar4,
                             *(undefined4 *)(puVar3 + 2));
          return uVar6;
        }
        local_10 = (undefined4)*puVar3;
        return local_10;
      }
      iVar1 = iVar1 + -1;
      lVar4 = lVar4 + -1;
    } while (iVar1 != -1);
  }
  local_10 = (undefined4)*(undefined8 *)this;
  return local_10;
}


/* TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame(float, Sexy::SexyVector3 const&, CurveType) */

void __thiscall
TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
          (undefined4 param_1,TimeLineTrack<Sexy::SexyVector3> *this,SexyVector3 *param_2,
          undefined4 param_4)

{
  long lVar1;
  SexyVector3 *this_00;
  undefined8 uVar2;
  
  lVar1 = FUN_03bb5810(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  std::
  vector<TimeLineKeyFrame<Sexy::SexyVector3>,std::allocator<TimeLineKeyFrame<Sexy::SexyVector3>>>::
  resize((vector<TimeLineKeyFrame<Sexy::SexyVector3>,std::allocator<TimeLineKeyFrame<Sexy::SexyVector3>>>
          *)(this + 0x10),lVar1 + 1);
  uVar2 = *(undefined8 *)(this + 0x10);
  lVar1 = FUN_03bb5810(uVar2,*(undefined8 *)(this + 0x18));
  this_00 = (SexyVector3 *)FUN_03bb5824(uVar2,lVar1 + -1);
  Sexy::SexyVector3::operator=(this_00,param_2);
  *(undefined4 *)(this_00 + 0x10) = param_4;
  *(undefined4 *)(this_00 + 0xc) = param_1;
  return;
}


/* TimeLineTrack<int>::AddKeyFrame(float, int const&, CurveType) */

void __thiscall
TimeLineTrack<int>::AddKeyFrame
          (undefined4 param_1,TimeLineTrack<int> *this,undefined4 *param_2,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_03bb57f0(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  std::vector<TimeLineKeyFrame<int>,std::allocator<TimeLineKeyFrame<int>>>::resize
            ((vector<TimeLineKeyFrame<int>,std::allocator<TimeLineKeyFrame<int>>> *)(this + 8),
             lVar1 + 1);
  uVar3 = *(undefined8 *)(this + 8);
  lVar1 = FUN_03bb57f0(uVar3,*(undefined8 *)(this + 0x10));
  puVar2 = (undefined4 *)FUN_03bb5804(uVar3,lVar1 + -1);
  *puVar2 = *param_2;
  puVar2[2] = param_4;
  puVar2[1] = param_1;
  return;
}


/* TimeLineTrack<float>::Finished(float) const */

bool __thiscall TimeLineTrack<float>::Finished(TimeLineTrack<float> *this,float param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_042f1088(uVar2,*(undefined8 *)(this + 0x10));
  lVar1 = FUN_042f109c(uVar2,lVar1 + -1);
  return *(float *)(lVar1 + 4) <= param_1;
}

