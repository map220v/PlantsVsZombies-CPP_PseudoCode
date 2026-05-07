// Class: Sexy::RenderStateManager::Context::JournalEntry


/* Sexy::RenderStateManager::Context::JournalEntry::JournalEntry() */

void __thiscall Sexy::RenderStateManager::Context::JournalEntry::JournalEntry(JournalEntry *this)

{
  *(undefined8 *)this = 0;
  StateValue::StateValue((StateValue *)(this + 8),0);
  StateValue::StateValue((StateValue *)(this + 0x20),0);
  return;
}


/* Sexy::RenderStateManager::Context::JournalEntry::JournalEntry(Sexy::RenderStateManager::State*,
   Sexy::RenderStateManager::StateValue const&, Sexy::RenderStateManager::StateValue const&) */

void __thiscall
Sexy::RenderStateManager::Context::JournalEntry::JournalEntry
          (JournalEntry *this,State *param_1,StateValue *param_2,StateValue *param_3)

{
  *(State **)this = param_1;
  StateValue::StateValue((StateValue *)(this + 8),param_2);
  StateValue::StateValue((StateValue *)(this + 0x20),param_3);
  return;
}


/* Sexy::RenderStateManager::Context::JournalEntry::JournalEntry(Sexy::RenderStateManager::Context::JournalEntry
   const&) */

void __thiscall
Sexy::RenderStateManager::Context::JournalEntry::JournalEntry
          (JournalEntry *this,JournalEntry *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  StateValue::StateValue((StateValue *)(this + 8),(StateValue *)(param_1 + 8));
  StateValue::StateValue((StateValue *)(this + 0x20),(StateValue *)(param_1 + 0x20));
  return;
}

