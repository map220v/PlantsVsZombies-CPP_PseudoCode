// Class: StephaniaMinorHitInfo


/* StephaniaMinorHitInfo::StephaniaMinorHitInfo(StephaniaMinorHitInfo&&) */

void __thiscall
StephaniaMinorHitInfo::StephaniaMinorHitInfo
          (StephaniaMinorHitInfo *this,StephaniaMinorHitInfo *param_1)

{
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* StephaniaMinorHitInfo::StephaniaMinorHitInfo(Sexy::Point, Sexy::RtWeakPtr<Effect_PopAnim>, float)
    */

void __thiscall
StephaniaMinorHitInfo::StephaniaMinorHitInfo
          (undefined4 param_1,StephaniaMinorHitInfo *this,TPoint *param_3,RtWeakPtrBase *param_4)

{
  Sexy::Point::Point((Point *)this,param_3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),param_4);
  *(undefined4 *)(this + 0x10) = param_1;
  return;
}


/* StephaniaMinorHitInfo::StephaniaMinorHitInfo() */

void __thiscall StephaniaMinorHitInfo::StephaniaMinorHitInfo(StephaniaMinorHitInfo *this)

{
  Sexy::Point::Point((Point *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  return;
}


/* StephaniaMinorHitInfo::TEMPNAMEPLACEHOLDERVALUE(StephaniaMinorHitInfo&&) */

StephaniaMinorHitInfo * __thiscall
StephaniaMinorHitInfo::operator=(StephaniaMinorHitInfo *this,StephaniaMinorHitInfo *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

