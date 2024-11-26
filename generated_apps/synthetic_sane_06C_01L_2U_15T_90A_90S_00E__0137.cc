#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask7);
DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU0Task4Subtask14);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask5);
DeclareTask(CPU2Task5Subtask1);
DeclareTask(CPU2Task5Subtask9);
DeclareTask(CPU3Task1Subtask0);
DeclareTask(CPU3Task1Subtask13);
DeclareTask(CPU4Task0Subtask6);
DeclareTask(CPU4Task0Subtask10);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task2Subtask2);
DeclareTask(CPU5Task2Subtask4);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 156); // 0
  ActivateTask(CPU4Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 115); // 0
  ActivateTask(CPU0Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 139); // 0
  ActivateTask(CPU0Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 129); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 192); // 0
  ActivateTask(CPU1Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 147); // 0
  ActivateTask(CPU0Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 160); // 0
  ActivateTask(CPU2Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 51); // 0
  ActivateTask(CPU0Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 189); // 0
  ActivateTask(CPU4Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 117); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 39); // 0
  ActivateTask(CPU3Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 82); // 0
  TerminateTask();

}
