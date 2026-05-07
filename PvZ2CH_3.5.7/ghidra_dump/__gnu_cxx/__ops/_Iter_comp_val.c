// Class: __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>


/* __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::_Iter_comp_val(std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>) */

void __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::_Iter_comp_val(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
                 *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)this = *param_2;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(this + 0x10) = param_2[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = param_2[4];
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_val<bool (*)(PlantAccessoryInfo,
   PlantAccessoryInfo)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAccessoryInfo*,
   std::vector<PlantAccessoryInfo, std::allocator<PlantAccessoryInfo> > >, PlantAccessoryInfo&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)>::operator()
          (_Iter_comp_val<bool(*)(PlantAccessoryInfo,PlantAccessoryInfo)> *this,undefined8 param_2,
          PlantAccessoryInfo *param_3)

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
  local_58[0] = param_2;
  pPVar2 = (PlantAccessoryInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_48,pPVar2);
  PlantAccessoryInfo::PlantAccessoryInfo(aPStack_28,param_3);
  uVar1 = (*pcVar3)(aPStack_48,aPStack_28);
  PakRecord::~PakRecord((PakRecord *)aPStack_28);
  PakRecord::~PakRecord((PakRecord *)aPStack_48);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantPieceRecord::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantPieceRecord::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantPieceRecord*,
   std::vector<PlantPieceRecord, std::allocator<PlantPieceRecord> > >, PlantPieceRecord&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,PlantPieceRecord *param_3)

{
  bool bVar1;
  PlantPieceRecord *pPVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pPVar2 = (PlantPieceRecord *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantPieceRecord::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantStarLevel::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantStarLevel*,
   std::vector<PlantStarLevel, std::allocator<PlantStarLevel> > >, PlantStarLevel&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,PlantStarLevel *param_3)

{
  bool bVar1;
  PlantStarLevel *pPVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pPVar2 = (PlantStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   ZombieStarLevel::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int ZombieStarLevel::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<ZombieStarLevel*,
   std::vector<ZombieStarLevel, std::allocator<ZombieStarLevel> > >, ZombieStarLevel&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,ZombieStarLevel *param_3)

{
  bool bVar1;
  ZombieStarLevel *pZVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pZVar2 = (ZombieStarLevel *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_ZombieStarLevel::*>(std::_Placeholder<2>)>)>
                        *)this,pZVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<long
   BundleDisplay::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<long BundleDisplay::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BundleDisplay*,
   std::vector<BundleDisplay, std::allocator<BundleDisplay> > >, BundleDisplay&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,BundleDisplay *param_3)

{
  bool bVar1;
  BundleDisplay *pBVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pBVar2 = (BundleDisplay *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleDisplay::*>(std::_Placeholder<2>)>)>
                        *)this,pBVar2,param_3);
  return bVar1;
}


/* __gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_ClosestByColumn>::_Iter_comp_val(EntityFinder::BoardEntitySorter_ClosestByColumn)
    */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_ClosestByColumn>::_Iter_comp_val
          (_Iter_comp_val<EntityFinder::BoardEntitySorter_ClosestByColumn> *this,long param_2)

{
  EntityFinder::BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR_nop_068c7e10;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_2 + 8));
  return;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_val<CollectionSorter>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<LevelBasedSelectInfo*,
   std::vector<LevelBasedSelectInfo, std::allocator<LevelBasedSelectInfo> > >,
   LevelBasedSelectInfo&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<CollectionSorter>::operator()
          (_Iter_comp_val<CollectionSorter> *this,undefined8 param_2,LevelBasedSelectInfo *param_3)

{
  undefined1 uVar1;
  LevelBasedSelectInfo *pLVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pLVar2 = (LevelBasedSelectInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = CollectionSorter::operator()((CollectionSorter *)this,pLVar2,param_3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<bool (*)(Sexy::LeaderboardEntry const&,
   Sexy::LeaderboardEntry
   const&)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::LeaderboardEntry*,
   std::vector<Sexy::LeaderboardEntry, std::allocator<Sexy::LeaderboardEntry> > >,
   Sexy::LeaderboardEntry&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>::operator()
          (_Iter_comp_val<bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>
           *this,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = (**(code **)this)(uVar2,param_3);
  return (bool)uVar1;
}


/* __gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest>::_Iter_comp_val(EntityFinder::BoardEntitySorter_Closest)
    */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest>::_Iter_comp_val
          (_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest> *this,long param_2)

{
  EntityFinder::BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR_nop_068c7e40;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_2 + 8));
  return;
}


/* bool 
   __gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,
   std::vector<Sexy::RtWeakPtr<Zombie>, std::allocator<Sexy::RtWeakPtr<Zombie> > > >,
   Sexy::RtWeakPtr<Zombie>&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest>::operator()
          (_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest> *this,undefined8 param_2,
          RtWeakPtr *param_3)

{
  undefined1 uVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
  uVar1 = EntityFinder::BoardEntitySorter_Closest::operator()
                    ((BoardEntity *)this,(BoardEntity *)pRVar2);
  return (bool)uVar1;
}


/* __gnu_cxx::__ops::_Iter_comp_val<std::function<bool (AwardDiffEntry const&, AwardDiffEntry
   const&)> >::_Iter_comp_val(std::function<bool (AwardDiffEntry const&, AwardDiffEntry const&)>) */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>::
_Iter_comp_val(_Iter_comp_val<std::function<bool(AwardDiffEntry_const&,AwardDiffEntry_const&)>>
               *this,function *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  std::_Function_base::_Function_base((_Function_base *)this);
  bVar1 = std::function::operator_cast_to_bool(param_2);
  if (bVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar2;
    (**(code **)(param_2 + 0x10))(this,param_2,2);
  }
  return;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<TimeLine::Update(float)::{lambda(TimeLineEvent const&,
   TimeLineEvent const&)#1}>::TEMPNAMEPLACEHOLDERVALUE(std::_Deque_iterator<TimeLineEvent,
   TimeLineEvent&, TimeLineEvent*>, TimeLineEvent&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<TimeLine::Update(float)::{lambda(TimeLineEvent_const&,TimeLineEvent_const&)#1}>::
operator()(_Iter_comp_val<TimeLine::Update(float)::_lambda(TimeLineEvent_const&,TimeLineEvent_const&)_1_>
           *this,undefined8 *param_2,TimeLineEvent *param_3)

{
  undefined1 uVar1;
  TimeLineEvent *pTVar2;
  
  pTVar2 = (TimeLineEvent *)FUN_03868f90(*param_2);
  uVar1 = TimeLine::Update(float)::{lambda(TimeLineEvent_const&,TimeLineEvent_const&)#1}::operator()
                    ((_lambda_TimeLineEvent_const__TimeLineEvent_const___1_ *)this,pTVar2,param_3);
  return (bool)uVar1;
}


/* __gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest_WeightNewRows>::_Iter_comp_val(EntityFinder::BoardEntitySorter_Closest_WeightNewRows)
    */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest_WeightNewRows>::
_Iter_comp_val(_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest_WeightNewRows> *this,
              long param_2)

{
  EntityFinder::BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_WeightNewRows_068c7de0;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_2 + 8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10),(vector *)(param_2 + 0x10));
  return;
}


/* __gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest_WeightNewRows>::~_Iter_comp_val()
    */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest_WeightNewRows>::
~_Iter_comp_val(_Iter_comp_val<EntityFinder::BoardEntitySorter_Closest_WeightNewRows> *this)

{
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_WeightNewRows_068c7de0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_val<bool (*)(Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity>)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > > >,
   Sexy::RtWeakPtr<BoardEntity>&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>
::operator()(_Iter_comp_val<bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>
             *this,undefined8 param_2,RtWeakPtrBase *param_3)

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
  local_28[0] = param_2;
  pRVar2 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
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
   __gnu_cxx::__ops::_Iter_comp_val<PlantSorter_LowestHP>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::Point*,
   std::vector<Sexy::Point, std::allocator<Sexy::Point> > >, Sexy::Point&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<PlantSorter_LowestHP>::operator()
          (_Iter_comp_val<PlantSorter_LowestHP> *this,undefined8 param_2,Point *param_3)

{
  undefined1 uVar1;
  Point *pPVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = PlantSorter_LowestHP::operator()((PlantSorter_LowestHP *)this,pPVar2,param_3);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<bool (*)(PlayerInfo*,
   PlayerInfo*)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlayerInfo>*,
   std::vector<Sexy::RtWeakPtr<PlayerInfo>, std::allocator<Sexy::RtWeakPtr<PlayerInfo> > > >,
   Sexy::RtWeakPtr<PlayerInfo>&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<bool(*)(PlayerInfo*,PlayerInfo*)>::operator()
          (_Iter_comp_val<bool(*)(PlayerInfo*,PlayerInfo*)> *this,undefined8 param_2,
          RtWeakPtr *param_3)

{
  undefined1 uVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ResourceInfo *pRVar3;
  code *pcVar4;
  undefined8 local_8;
  
  pcVar4 = *(code **)this;
  local_8 = param_2;
  this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
  uVar1 = (*pcVar4)(pRVar2,pRVar3);
  return (bool)uVar1;
}


/* __gnu_cxx::__ops::_Iter_comp_val<DistFromSorter>::_Iter_comp_val(DistFromSorter) */

void __gnu_cxx::__ops::_Iter_comp_val<DistFromSorter>::_Iter_comp_val
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  *param_4 = CONCAT44(param_2,param_1);
  *(undefined4 *)(param_4 + 1) = param_3;
  return;
}


/* __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::_Mem_fn<bool
   (EntityFinder::BoardEntitySorter::*)(BoardEntity*, BoardEntity*) const>
   (EntityFinder::BoardEntitySorter*, std::_Placeholder<1>, std::_Placeholder<2>)>
   >::_Iter_comp_val(std::_Bind<std::_Mem_fn<bool (EntityFinder::BoardEntitySorter::*)(BoardEntity*,
   BoardEntity*) const> (EntityFinder::BoardEntitySorter*, std::_Placeholder<1>,
   std::_Placeholder<2>)>) */

void __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
::_Iter_comp_val(_Iter_comp_val<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
                 *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)this = *param_2;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = param_2[2];
  return;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::_Mem_fn<bool
   (EntityFinder::BoardEntitySorter::*)(BoardEntity*, BoardEntity*) const>
   (EntityFinder::BoardEntitySorter*, std::_Placeholder<1>, std::_Placeholder<2>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BoardEntity**, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > >, BoardEntity*&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
::operator()(_Iter_comp_val<std::_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>>
             *this,undefined8 param_2,BoardEntity **param_3)

{
  bool bVar1;
  BoardEntity **ppBVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  ppBVar2 = (BoardEntity **)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>
          ::operator()((_Bind<std::_Mem_fn<bool(EntityFinder::BoardEntitySorter::*)(BoardEntity*,BoardEntity*)const>(EntityFinder::BoardEntitySorter*,std::_Placeholder<1>,std::_Placeholder<2>)>
                        *)this,ppBVar2,param_3);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_val<bool (*)(AccessoryPieceUIInfo,
   AccessoryPieceUIInfo)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AccessoryPieceUIInfo*,
   std::vector<AccessoryPieceUIInfo, std::allocator<AccessoryPieceUIInfo> > >,
   AccessoryPieceUIInfo&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)>::operator()
          (_Iter_comp_val<bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)> *this,
          undefined8 param_2,AccessoryPieceUIInfo *param_3)

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
  local_48[0] = param_2;
  pAVar2 = (AccessoryPieceUIInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_38,pAVar2);
  AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_20,param_3);
  uVar1 = (*pcVar3)(aAStack_38,aAStack_20);
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_20);
  AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<long
   BundleUIDetail::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<long BundleUIDetail::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BundleUIDetail*,
   std::vector<BundleUIDetail, std::allocator<BundleUIDetail> > >, BundleUIDetail&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,BundleUIDetail *param_3)

{
  bool bVar1;
  BundleUIDetail *pBVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pBVar2 = (BundleUIDetail *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<long_BundleUIDetail::*>(std::_Placeholder<2>)>)>
                        *)this,pBVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int PlantAvatarInfo::*>
   (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAvatarInfo*,
   std::vector<PlantAvatarInfo, std::allocator<PlantAvatarInfo> > >, PlantAvatarInfo&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,PlantAvatarInfo *param_3)

{
  bool bVar1;
  PlantAvatarInfo *pPVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pPVar2 = (PlantAvatarInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8)
  ;
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAvatarPiecesInfo*,
   std::vector<PlantAvatarPiecesInfo, std::allocator<PlantAvatarPiecesInfo> > >,
   PlantAvatarPiecesInfo&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,PlantAvatarPiecesInfo *param_3)

{
  bool bVar1;
  PlantAvatarPiecesInfo *pPVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pPVar2 = (PlantAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<std::string >
   (std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<1>)>,
   std::_Bind<std::_Mem_fn<std::string AccessoryPiece::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<AccessoryPiece*,
   std::vector<AccessoryPiece, std::allocator<AccessoryPiece> > >, AccessoryPiece&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,AccessoryPiece *param_3)

{
  bool bVar1;
  AccessoryPiece *pAVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pAVar2 = (AccessoryPiece *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<std::string>(std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<std::string_AccessoryPiece::*>(std::_Placeholder<2>)>)>
                        *)this,pAVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   MaterialInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int MaterialInfo::*>
   (std::_Placeholder<2>)>)> >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<MaterialInfo*,
   std::vector<MaterialInfo, std::allocator<MaterialInfo> > >, MaterialInfo&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,MaterialInfo *param_3)

{
  bool bVar1;
  MaterialInfo *pMVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pMVar2 = (MaterialInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_MaterialInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pMVar2,param_3);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_comp_val<std::_Bind<std::less<int> (std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<1>)>, std::_Bind<std::_Mem_fn<int
   PlantNewAvatarPiecesInfo::*> (std::_Placeholder<2>)>)>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantNewAvatarPiecesInfo*,
   std::vector<PlantNewAvatarPiecesInfo, std::allocator<PlantNewAvatarPiecesInfo> > >,
   PlantNewAvatarPiecesInfo&) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
::operator()(_Iter_comp_val<std::_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>>
             *this,undefined8 param_2,PlantNewAvatarPiecesInfo *param_3)

{
  bool bVar1;
  PlantNewAvatarPiecesInfo *pPVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pPVar2 = (PlantNewAvatarPiecesInfo *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::
          _Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
          ::operator()((_Bind<std::less<int>(std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>)>
                        *)this,pPVar2,param_3);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __gnu_cxx::__ops::_Iter_comp_val<bool (*)(plantInfo,
   plantInfo)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<plantInfo*,
   std::vector<plantInfo, std::allocator<plantInfo> > >, plantInfo&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<bool(*)(plantInfo,plantInfo)>::operator()
          (_Iter_comp_val<bool(*)(plantInfo,plantInfo)> *this,undefined8 param_2,plantInfo *param_3)

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
  local_38[0] = param_2;
  ppVar2 = (plantInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
  plantInfo::plantInfo(apStack_28,ppVar2);
  plantInfo::plantInfo(apStack_18,param_3);
  uVar1 = (*pcVar3)(apStack_28,apStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_28);
  if (local_8 == ___stack_chk_guard) {
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

