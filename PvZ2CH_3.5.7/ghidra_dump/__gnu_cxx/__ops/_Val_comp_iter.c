// Class: __gnu_cxx::__ops::_Val_comp_iter<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Val_comp_iter<bool (*)(PlantAccessoryInfo,
   PlantAccessoryInfo)>::TEMPNAMEPLACEHOLDERVALUE(PlantAccessoryInfo&,
   __gnu_cxx::__normal_iterator<PlantAccessoryInfo*, std::vector<PlantAccessoryInfo,
   std::allocator<PlantAccessoryInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)>::operator()
          (_Val_comp_iter<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)> *this,
          PlantAccessoryInfo *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  PlantAccessoryInfo *pPVar2;
  code *pcVar3;
  undefined8 local_58 [2];
  PlantAccessoryInfo aPStack_48 [32];
  PlantAccessoryInfo aPStack_28 [32];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_58[0] = param_3;
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_48,param_1);
  pPVar2 = (PlantAccessoryInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_28,pPVar2);
  uVar1 = (*pcVar3)(aPStack_48,aPStack_28);
  PakRecord::~PakRecord((PakRecord *)aPStack_28);
  PakRecord::~PakRecord((PakRecord *)aPStack_48);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantPieceRecord::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantPieceRecord::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(PlantPieceRecord&,
   __gnu_cxx::__normal_iterator<PlantPieceRecord*, std::vector<PlantPieceRecord,
   std::allocator<PlantPieceRecord> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
             *this,PlantPieceRecord *param_1,undefined8 param_3)

{
  bool bVar1;
  PlantPieceRecord *pPVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pPVar2 = (PlantPieceRecord *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pPVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantStarLevel::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(PlantStarLevel&,
   __gnu_cxx::__normal_iterator<PlantStarLevel*, std::vector<PlantStarLevel,
   std::allocator<PlantStarLevel> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,PlantStarLevel *param_1,undefined8 param_3)

{
  bool bVar1;
  PlantStarLevel *pPVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pPVar2 = (PlantStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pPVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   ZombieStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int ZombieStarLevel::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(ZombieStarLevel&,
   __gnu_cxx::__normal_iterator<ZombieStarLevel*, std::vector<ZombieStarLevel,
   std::allocator<ZombieStarLevel> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,ZombieStarLevel *param_1,undefined8 param_3)

{
  bool bVar1;
  ZombieStarLevel *pZVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pZVar2 = (ZombieStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pZVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<long
   BundleDisplay::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<long BundleDisplay::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(BundleDisplay&,
   __gnu_cxx::__normal_iterator<BundleDisplay*, std::vector<BundleDisplay,
   std::allocator<BundleDisplay> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>>
             *this,BundleDisplay *param_1,undefined8 param_3)

{
  bool bVar1;
  BundleDisplay *pBVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pBVar2 = (BundleDisplay *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pBVar2);
  return bVar1;
}


/* bool 
   __gnu_cxx::__ops::_Val_comp_iter<CollectionSorter>::TEMPNAMEPLACEHOLDERVALUE(LevelBasedSelectInfo&,
   __gnu_cxx::__normal_iterator<LevelBasedSelectInfo*, std::vector<LevelBasedSelectInfo,
   std::allocator<LevelBasedSelectInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<CollectionSorter>::operator()
          (_Val_comp_iter<CollectionSorter> *this,LevelBasedSelectInfo *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  LevelBasedSelectInfo *pLVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pLVar2 = (LevelBasedSelectInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = CollectionSorter::operator()((CollectionSorter *)this,param_1,pLVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<bool (*)(Sexy::LeaderboardEntry const&,
   Sexy::LeaderboardEntry const&)>::TEMPNAMEPLACEHOLDERVALUE(Sexy::LeaderboardEntry&,
   __gnu_cxx::__normal_iterator<Sexy::LeaderboardEntry*, std::vector<Sexy::LeaderboardEntry,
   std::allocator<Sexy::LeaderboardEntry> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>::operator()
          (_Val_comp_iter<bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>
           *this,undefined8 param_1,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = (**(code **)this)(param_1,uVar2);
  return (bool)uVar1;
}


/* bool 
   __gnu_cxx::__ops::_Val_comp_iter<EntityFinder::BoardEntitySorter_Closest>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtWeakPtr<Zombie>&,
   __gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*, std::vector<Sexy::RtWeakPtr<Zombie>,
   std::allocator<Sexy::RtWeakPtr<Zombie> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<EntityFinder::BoardEntitySorter_Closest>::operator()
          (_Val_comp_iter<EntityFinder::BoardEntitySorter_Closest> *this,RtWeakPtr *param_1,
          undefined8 param_3)

{
  undefined1 uVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr *this_00;
  undefined8 local_8;
  
  local_8 = param_3;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_1);
  this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  uVar1 = EntityFinder::BoardEntitySorter_Closest::operator()
                    ((BoardEntity *)this,(BoardEntity *)pRVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<TimeLine::Update(float)::{lambda(TimeLineEvent const&,
   TimeLineEvent const&)#1}>::TEMPNAMEPLACEHOLDERVALUE(TimeLineEvent&,
   std::_Deque_iterator<TimeLineEvent, TimeLineEvent&, TimeLineEvent*>) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<TimeLine::Update(float)::{lambda(TimeLineEvent_const&,TimeLineEvent_const&)#1}>::
operator()(_Val_comp_iter<TimeLine::Update(float)::_lambda(TimeLineEvent_const&,TimeLineEvent_const&)_1_>
           *this,TimeLineEvent *param_1,undefined8 *param_3)

{
  undefined1 uVar1;
  TimeLineEvent *pTVar2;
  
  pTVar2 = (TimeLineEvent *)FUN_03868f90(*param_3);
  uVar1 = TimeLine::Update(float)::{lambda(TimeLineEvent_const&,TimeLineEvent_const&)#1}::operator()
                    ((_lambda_TimeLineEvent_const__TimeLineEvent_const___1_ *)this,param_1,pTVar2);
  return (bool)uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Val_comp_iter<bool (*)(Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity>)>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtWeakPtr<BoardEntity>&,
   __gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>
::operator()(_Val_comp_iter<bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>
             *this,RtWeakPtrBase *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  RtWeakPtrBase *pRVar2;
  code *pcVar3;
  undefined8 local_28 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_28[0] = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_1);
  pRVar2 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar2);
  uVar1 = (*pcVar3)(aRStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool 
   __gnu_cxx::__ops::_Val_comp_iter<PlantSorter_LowestHP>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Point&,
   __gnu_cxx::__normal_iterator<Sexy::Point*, std::vector<Sexy::Point, std::allocator<Sexy::Point> >
   >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<PlantSorter_LowestHP>::operator()
          (_Val_comp_iter<PlantSorter_LowestHP> *this,Point *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  Point *pPVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = PlantSorter_LowestHP::operator()((PlantSorter_LowestHP *)this,param_1,pPVar2);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<bool (*)(PlayerInfo*,
   PlayerInfo*)>::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtWeakPtr<PlayerInfo>&,
   __gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlayerInfo>*,
   std::vector<Sexy::RtWeakPtr<PlayerInfo>, std::allocator<Sexy::RtWeakPtr<PlayerInfo> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<bool(*)(PlayerInfo*,PlayerInfo*)>::operator()
          (_Val_comp_iter<bool(*)(PlayerInfo*,PlayerInfo*)> *this,RtWeakPtr *param_1,
          undefined8 param_3)

{
  undefined1 uVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar3;
  code *pcVar4;
  undefined8 local_8;
  
  pcVar4 = *(code **)this;
  local_8 = param_3;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_1);
  this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  uVar1 = (*pcVar4)(pRVar2,pRVar3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::_Mem_fn<bool
   (EntityFinder::BoardEntitySorter::*)(BoardEntity*, BoardEntity*) const>
   (EntityFinder::BoardEntitySorter*, std::_Placeholder<1>, std::_Placeholder<2>)>
   >::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*&, __gnu_cxx::__normal_iterator<BoardEntity**,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
::operator()(_Val_comp_iter<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
             *this,BoardEntity **param_1,undefined8 param_3)

{
  bool bVar1;
  BoardEntity **ppBVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  ppBVar2 = (BoardEntity **)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>
          ::operator()((_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>
                        *)this,param_1,ppBVar2);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Val_comp_iter<bool (*)(AccessoryPieceUIInfo,
   AccessoryPieceUIInfo)>::TEMPNAMEPLACEHOLDERVALUE(AccessoryPieceUIInfo&,
   __gnu_cxx::__normal_iterator<AccessoryPieceUIInfo*, std::vector<AccessoryPieceUIInfo,
   std::allocator<AccessoryPieceUIInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)>::operator()
          (_Val_comp_iter<bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)> *this,
          AccessoryPieceUIInfo *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  AccessoryPieceUIInfo *pAVar2;
  code *pcVar3;
  undefined8 local_48 [2];
  AccessoryPieceUIInfo aAStack_38 [24];
  AccessoryPieceUIInfo aAStack_20 [24];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_48[0] = param_3;
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_38,param_1);
  pAVar2 = (AccessoryPieceUIInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_20,pAVar2);
  uVar1 = (*pcVar3)(aAStack_38,aAStack_20);
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_20);
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<long
   BundleUIDetail::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<long BundleUIDetail::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(BundleUIDetail&,
   __gnu_cxx::__normal_iterator<BundleUIDetail*, std::vector<BundleUIDetail,
   std::allocator<BundleUIDetail> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
             *this,BundleUIDetail *param_1,undefined8 param_3)

{
  bool bVar1;
  BundleUIDetail *pBVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pBVar2 = (BundleUIDetail *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pBVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantAvatarInfo::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(PlantAvatarInfo&,
   __gnu_cxx::__normal_iterator<PlantAvatarInfo*, std::vector<PlantAvatarInfo,
   std::allocator<PlantAvatarInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
             *this,PlantAvatarInfo *param_1,undefined8 param_3)

{
  bool bVar1;
  PlantAvatarInfo *pPVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pPVar2 = (PlantAvatarInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pPVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(PlantAvatarPiecesInfo&,
   __gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*, std::vector<PlantAvatarPiecesInfo,
   std::allocator<PlantAvatarPiecesInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,PlantAvatarPiecesInfo *param_1,undefined8 param_3)

{
  bool bVar1;
  PlantAvatarPiecesInfo *pPVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pPVar2 = (PlantAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pPVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<std::string >
   (std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<1>)>,
   std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(AccessoryPiece&, __gnu_cxx::__normal_iterator<AccessoryPiece*,
   std::vector<AccessoryPiece, std::allocator<AccessoryPiece> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
             *this,AccessoryPiece *param_1,undefined8 param_3)

{
  bool bVar1;
  AccessoryPiece *pAVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pAVar2 = (AccessoryPiece *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pAVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   MaterialInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int MaterialInfo::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(MaterialInfo&,
   __gnu_cxx::__normal_iterator<MaterialInfo*, std::vector<MaterialInfo,
   std::allocator<MaterialInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
             *this,MaterialInfo *param_1,undefined8 param_3)

{
  bool bVar1;
  MaterialInfo *pMVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pMVar2 = (MaterialInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pMVar2);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Val_comp_iter<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(PlantNewAvatarPiecesInfo&,
   __gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*, std::vector<PlantNewAvatarPiecesInfo,
   std::allocator<PlantNewAvatarPiecesInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Val_comp_iter<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,PlantNewAvatarPiecesInfo *param_1,undefined8 param_3)

{
  bool bVar1;
  PlantNewAvatarPiecesInfo *pPVar2;
  undefined8 local_8;
  
  local_8 = param_3;
  pPVar2 = (PlantNewAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,param_1,pPVar2);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Val_comp_iter<bool (*)(plantInfo,
   plantInfo)>::TEMPNAMEPLACEHOLDERVALUE(plantInfo&, __gnu_cxx::__normal_iterator<plantInfo*,
   std::vector<plantInfo, std::allocator<plantInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<bool(*)(plantInfo,plantInfo)>::operator()
          (_Val_comp_iter<bool(*)(plantInfo,plantInfo)> *this,plantInfo *param_1,undefined8 param_3)

{
  undefined1 uVar1;
  plantInfo *ppVar2;
  code *pcVar3;
  undefined8 local_38 [2];
  plantInfo apStack_28 [16];
  plantInfo apStack_18 [16];
  long local_8;
  
  pcVar3 = *(code **)this;
  local_8 = ___stack_chk_guard;
  local_38[0] = param_3;
  plantInfo::plantInfo(apStack_28,param_1);
  ppVar2 = (plantInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
  plantInfo::plantInfo(apStack_18,ppVar2);
  uVar1 = (*pcVar3)(apStack_28,apStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_28);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

