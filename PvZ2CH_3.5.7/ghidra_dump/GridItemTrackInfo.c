// Class: GridItemTrackInfo


/* GridItemTrackInfo::TEMPNAMEPLACEHOLDERVALUE(GridItemTrackInfo const&) */

GridItemTrackInfo * __thiscall
GridItemTrackInfo::operator=(GridItemTrackInfo *this,GridItemTrackInfo *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}


/* GridItemTrackInfo::GridItemTrackInfo(Sexy::RtWeakPtr<GridItem>, Sexy::Point) */

void __thiscall
GridItemTrackInfo::GridItemTrackInfo(GridItemTrackInfo *this,RtWeakPtrBase *param_2,TPoint *param_3)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)this,param_2);
  Sexy::Point::Point((Point *)(this + 8),param_3);
  return;
}


/* GridItemTrackInfo::GridItemTrackInfo() */

void __thiscall GridItemTrackInfo::GridItemTrackInfo(GridItemTrackInfo *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Point::Point((Point *)(this + 8));
  return;
}

