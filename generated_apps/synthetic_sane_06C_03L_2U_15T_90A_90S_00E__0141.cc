#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task4Subtask5);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU0Task4Subtask13);
DeclareTask(CPU1Task1Subtask4);
DeclareTask(CPU1Task1Subtask12);
DeclareTask(CPU2Task2Subtask2);
DeclareTask(CPU2Task2Subtask3);
DeclareTask(CPU3Task3Subtask10);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask1);
DeclareTask(CPU4Task0Subtask7);
DeclareTask(CPU4Task0Subtask8);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task5Subtask6);
DeclareTask(CPU5Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 33); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 9); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 138); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 193); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 128); // 0
  ActivateTask(CPU2Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 185); // 0
  ActivateTask(CPU0Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 190); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 89); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 10); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 100); // 0
  ActivateTask(CPU4Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 169); // 0
  ActivateTask(CPU4Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 135); // 0
  ActivateTask(CPU0Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 56); // 0
  ActivateTask(CPU5Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 62); // 0
  TerminateTask();

}
