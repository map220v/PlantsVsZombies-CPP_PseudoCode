// Class: DSpriteStringNode


/* DSpriteStringNode::getString() */

undefined8 DSpriteStringNode::getString(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* DSpriteStringNode::setResourceLib(std::unordered_map<std::string, std::string,
   std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<std::string const,
   std::string > > > const&) */

DSpriteStringNode * __thiscall
DSpriteStringNode::setResourceLib(DSpriteStringNode *this,unordered_map *param_1)

{
  std::
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::operator=((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               *)(this + 0x150),param_1);
  return this;
}


/* DSpriteStringNode::~DSpriteStringNode() */

void __thiscall DSpriteStringNode::~DSpriteStringNode(DSpriteStringNode *this)

{
  *(undefined ***)this = &PTR__DSpriteStringNode_06a23690;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a239e8;
  std::string::~string((string *)(this + 0x188));
  std::
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~unordered_map((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    *)(this + 0x150));
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DSpriteStringNode::~DSpriteStringNode() */

void __thiscall DSpriteStringNode::~DSpriteStringNode(DSpriteStringNode *this)

{
  ~DSpriteStringNode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteStringNode::setString(char const*) */

void __thiscall DSpriteStringNode::setString(DSpriteStringNode *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  DTransformNode *this_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  float fVar12;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar3 = strlen(param_1);
  pcVar11 = *(code **)(*(long *)this + 0x50);
  std::string::string((string *)local_30,"SpriteString");
  (*pcVar11)((vector<DTransformNode*,std::allocator<DTransformNode*>> *)&local_20,this,
             (string *)local_30);
  std::string::~string((string *)local_30);
  nop();
  iVar2 = FUN_04f743f4(local_20,local_18);
  iVar2 = (int)sVar3 - iVar2;
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)&local_38);
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      (**(code **)(*plVar4 + 0x130))(0,0);
      this_00 = (DTransformNode *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      std::string::string((string *)local_30,"SpriteString");
      DTransformNode::setName(this_00,(string *)local_30);
      std::string::~string((string *)local_30);
      nop();
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      (**(code **)(*(long *)this + 0x30))(this,uVar5);
      local_30[0] = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      std::vector<DTransformNode*,std::allocator<DTransformNode*>>::push_back
                ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)&local_20,
                 (DTransformNode **)local_30);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_38);
    } while (iVar9 != iVar2);
  }
  fVar12 = 0.0;
  lVar10 = 0;
  local_58 = 0.0;
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if ((int)lVar10 < (int)sVar3) {
      DString::DString((DString *)local_30,param_1[lVar10]);
      DString::operator_cast_to_string((DString *)local_30);
      local_40 = std::
                 unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::find((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)(this + 0x150),(string *)&local_38);
      std::string::~string((string *)&local_38);
      local_38 = FUN_04f77844();
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_38);
      if (bVar1) {
        plVar4 = (long *)*puVar6;
        lVar7 = std::__detail::
                _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                            *)&local_40);
        (**(code **)(*plVar4 + 0x2e8))(plVar4,lVar7 + 8);
        (**(code **)(*(long *)*puVar6 + 0x110))(fVar12,0,(long *)*puVar6);
        (**(code **)(*(long *)*puVar6 + 0xd8))((long *)*puVar6,1);
        (**(code **)(*(long *)*puVar6 + 0x218))((DRefPtr<DSpriteNode> *)&local_38,(long *)*puVar6);
        fVar12 = fVar12 + (float)local_38;
        (**(code **)(*(long *)*puVar6 + 0x218))((DRefPtr<DSpriteNode> *)&local_38,(long *)*puVar6);
        local_54 = local_38._4_4_;
        pfVar8 = eastl::max_alt<float>(&local_58,&local_54);
        local_58 = *pfVar8;
      }
      else {
        uVar5 = DString::c_str((DString *)local_30);
        Sexy::OutputDebugStrF((wchar_t *)"[DSpriteStringNode] Not found key = %s \n",uVar5);
      }
      DString::~DString((DString *)local_30);
    }
    else {
      (**(code **)(*(long *)*puVar6 + 0xd8))((long *)*puVar6,0);
    }
    lVar10 = lVar10 + 1;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  pcVar11 = *(code **)(*(long *)this + 0x210);
  DVec2::DVec2((DVec2 *)local_30,fVar12,local_58);
  (*pcVar11)(this,(string *)local_30);
  std::vector<DTransformNode*,std::allocator<DTransformNode*>>::~vector
            ((vector<DTransformNode*,std::allocator<DTransformNode*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DSpriteStringNode::DSpriteStringNode() */

void __thiscall DSpriteStringNode::DSpriteStringNode(DSpriteStringNode *this)

{
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNode::DTransformNode((DTransformNode *)this);
  *(undefined ***)this = &PTR__DSpriteStringNode_06a23690;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a239e8;
  std::
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::unordered_map((ulong)(this + 0x150),(hash *)0xa,aeStack_20,aaStack_18);
  Set8BytesTo0(this + 0x188);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

