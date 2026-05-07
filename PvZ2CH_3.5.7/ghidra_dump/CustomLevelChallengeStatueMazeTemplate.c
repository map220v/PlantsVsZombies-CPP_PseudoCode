// Class: CustomLevelChallengeStatueMazeTemplate


/* CustomLevelChallengeStatueMazeTemplate::CustomLevelChallengeStatueMazeTemplate(CustomLevelMgr*)
    */

void __thiscall
CustomLevelChallengeStatueMazeTemplate::CustomLevelChallengeStatueMazeTemplate
          (CustomLevelChallengeStatueMazeTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665eba0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeStatueMazeTemplate::GenerateTemplate(CustomLevelCreator&,
   CustomLevelWorldParams const&, CustomLevelConfig const*) */

void CustomLevelChallengeStatueMazeTemplate::GenerateTemplate
               (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,
               CustomLevelConfig *param_3)

{
  bool bVar1;
  StatueMazeModuleProperties *pSVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int local_30;
  vector<StatueMazeModuleProperties::MatrixInfo,std::allocator<StatueMazeModuleProperties::MatrixInfo>>
  avStack_28 [24];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = CustomLevelCreator::AddModule<StatueMazeModuleProperties>((CustomLevelCreator *)param_2);
  local_68 = FUN_035ced18(*(undefined8 *)(param_3 + 0xd8));
  local_60 = FUN_035ced68(*(undefined8 *)(param_3 + 0xe0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    if (*piVar3 != 0) {
      StatueMazeModuleProperties::SetInfo::SetInfo((SetInfo *)&local_38);
      local_34 = piVar3[1];
      local_38 = *piVar3;
      local_30 = piVar3[2];
      local_10 = piVar3[3];
      local_58 = FUN_035cedb8(*(undefined8 *)(piVar3 + 4));
      local_50 = FUN_035cee08(*(undefined8 *)(piVar3 + 6));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        pcVar4 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        if (*(float *)(pcVar4 + 8) != 0.0) {
          EndLevelData::EndLevelData((EndLevelData *)&local_48);
          local_44 = *(undefined4 *)(pcVar4 + 4);
          local_40 = *(undefined4 *)(pcVar4 + 8);
          local_48 = 2;
          if (*pcVar4 != '\0') {
            local_48 = 1;
          }
          std::
          vector<StatueMazeModuleProperties::MatrixInfo,std::allocator<StatueMazeModuleProperties::MatrixInfo>>
          ::push_back(avStack_28,(MatrixInfo *)&local_48);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_58);
      }
      std::
      vector<StatueMazeModuleProperties::SetInfo,std::allocator<StatueMazeModuleProperties::SetInfo>>
      ::push_back((vector<StatueMazeModuleProperties::SetInfo,std::allocator<StatueMazeModuleProperties::SetInfo>>
                   *)(pSVar2 + 0x40),(SetInfo *)&local_38);
      StatueMazeModuleProperties::SetInfo::~SetInfo((SetInfo *)&local_38);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

