// Class: BattleArrayComponent


/* BattleArrayComponent::TEMPNAMEPLACEHOLDERVALUE(BattleArrayComponent const&) */

BattleArrayComponent * __thiscall
BattleArrayComponent::operator=(BattleArrayComponent *this,BattleArrayComponent *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}


/* BattleArrayComponent::BattleArrayComponent() */

void __thiscall BattleArrayComponent::BattleArrayComponent(BattleArrayComponent *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0xffffffff;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 8));
  return;
}

