// Class: AttachedBoardEntityNode


/* AttachedBoardEntityNode::AttachedBoardEntityNode(AttachedBoardEntityNode const&) */

void __thiscall
AttachedBoardEntityNode::AttachedBoardEntityNode
          (AttachedBoardEntityNode *this,AttachedBoardEntityNode *param_1)

{
  AttachedGameObjectNode::AttachedGameObjectNode
            ((AttachedGameObjectNode *)this,(AttachedGameObjectNode *)param_1);
  *(undefined ***)this = &PTR__AttachedBoardEntityNode_0675ccc0;
  return;
}


/* AttachedBoardEntityNode::AttachedBoardEntityNode(std::string const&) */

void __thiscall
AttachedBoardEntityNode::AttachedBoardEntityNode(AttachedBoardEntityNode *this,string *param_1)

{
  AttachedGameObjectNode::AttachedGameObjectNode((AttachedGameObjectNode *)this,param_1);
  *(undefined ***)this = &PTR__AttachedBoardEntityNode_0675ccc0;
  return;
}


/* AttachedBoardEntityNode::AttachedBoardEntityNode() */

void __thiscall AttachedBoardEntityNode::AttachedBoardEntityNode(AttachedBoardEntityNode *this)

{
  AttachedGameObjectNode::AttachedGameObjectNode((AttachedGameObjectNode *)this);
  *(undefined ***)this = &PTR__AttachedBoardEntityNode_0675ccc0;
  return;
}


/* AttachedBoardEntityNode::~AttachedBoardEntityNode() */

void __thiscall AttachedBoardEntityNode::~AttachedBoardEntityNode(AttachedBoardEntityNode *this)

{
  *(undefined ***)this = &PTR__AttachedBoardEntityNode_0675ccc0;
  AttachedGameObjectNode::~AttachedGameObjectNode((AttachedGameObjectNode *)this);
  return;
}


/* AttachedBoardEntityNode::~AttachedBoardEntityNode() */

void __thiscall AttachedBoardEntityNode::~AttachedBoardEntityNode(AttachedBoardEntityNode *this)

{
  ~AttachedBoardEntityNode(this);
  AK::FreeHook(this);
  return;
}


/* AttachedBoardEntityNode::Update(float) */

void AttachedBoardEntityNode::Update(float param_1)

{
  long in_x0;
  RtObject *this;
  BoardEntity *this_00;
  
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x10));
  this_00 = Sexy::RtObject::Cast<BoardEntity>(this);
  BoardEntity::Update(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityNode::Attach(BoardEntity*, Sexy::SexyVector3 const&, int) */

void AttachedBoardEntityNode::Attach(BoardEntity *param_1,SexyVector3 *param_2,int param_3)

{
  RtObject *this;
  BoardEntity *pBVar1;
  SexyVector3 *this_00;
  code *pcVar2;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10))
  ;
  pBVar1 = Sexy::RtObject::Cast<BoardEntity>(this);
  pcVar2 = *(code **)(*(long *)pBVar1 + 0x78);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
  local_18[0] = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)(ulong)(uint)param_3);
  (*pcVar2)(pBVar1,local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedBoardEntityNode::Attach(RealObject*, Sexy::SexyVector3 const&, int) */

void AttachedBoardEntityNode::Attach(RealObject *param_1,SexyVector3 *param_2,int param_3)

{
  RtObject *this;
  RealObject *pRVar1;
  SexyVector3 *this_00;
  code *pcVar2;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10))
  ;
  pRVar1 = Sexy::RtObject::Cast<RealObject>(this);
  pcVar2 = *(code **)(*(long *)pRVar1 + 0x78);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
  local_18[0] = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)(ulong)(uint)param_3);
  (*pcVar2)(pRVar1,local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AttachedBoardEntityNode::TEMPNAMEPLACEHOLDERVALUE(AttachedBoardEntityNode&&) */

AttachedBoardEntityNode * __thiscall
AttachedBoardEntityNode::operator=(AttachedBoardEntityNode *this,AttachedBoardEntityNode *param_1)

{
  AttachedGameObjectNode::operator=
            ((AttachedGameObjectNode *)this,(AttachedGameObjectNode *)param_1);
  return this;
}

