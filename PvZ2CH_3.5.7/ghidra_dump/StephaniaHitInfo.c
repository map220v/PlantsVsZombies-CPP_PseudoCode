// Class: StephaniaHitInfo


/* StephaniaHitInfo::StephaniaHitInfo() */

void __thiscall StephaniaHitInfo::StephaniaHitInfo(StephaniaHitInfo *this)

{
  Sexy::Point::Point((Point *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  this[0x10] = (StephaniaHitInfo)0x0;
  *(undefined4 *)(this + 0x14) = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  return;
}


/* StephaniaHitInfo::~StephaniaHitInfo() */

void __thiscall StephaniaHitInfo::~StephaniaHitInfo(StephaniaHitInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  return;
}


/* StephaniaHitInfo::StephaniaHitInfo(StephaniaHitInfo const&) */

void __thiscall StephaniaHitInfo::StephaniaHitInfo(StephaniaHitInfo *this,StephaniaHitInfo *param_1)

{
  StephaniaHitInfo SVar1;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  SVar1 = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = SVar1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}


/* StephaniaHitInfo::StephaniaHitInfo(Sexy::Point, Sexy::RtWeakPtr<Effect_PopAnim>, bool, int,
   std::vector<int, std::allocator<int> >, float) */

void __thiscall
StephaniaHitInfo::StephaniaHitInfo
          (undefined4 param_1,StephaniaHitInfo *this,TPoint *param_3,RtWeakPtrBase *param_4,
          StephaniaHitInfo param_5,undefined4 param_6,vector *param_7)

{
  Sexy::Point::Point((Point *)this,param_3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),param_4);
  this[0x10] = param_5;
  *(undefined4 *)(this + 0x14) = param_6;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),param_7);
  *(undefined4 *)(this + 0x30) = param_1;
  return;
}


/* StephaniaHitInfo::TEMPNAMEPLACEHOLDERVALUE(StephaniaHitInfo&&) */

StephaniaHitInfo * __thiscall
StephaniaHitInfo::operator=(StephaniaHitInfo *this,StephaniaHitInfo *param_1)

{
  StephaniaHitInfo SVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  SVar1 = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = SVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}


/* StephaniaHitInfo::StephaniaHitInfo(StephaniaHitInfo&&) */

void __thiscall StephaniaHitInfo::StephaniaHitInfo(StephaniaHitInfo *this,StephaniaHitInfo *param_1)

{
  StephaniaHitInfo SVar1;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  SVar1 = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = SVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}

