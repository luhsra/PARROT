#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task0Subtask12);
DeclareTask(CPU0Task3Subtask2);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask7);
DeclareTask(CPU0Task3Subtask10);
DeclareTask(CPU0Task3Subtask14);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU2Task2Subtask1);
DeclareTask(CPU2Task2Subtask3);
DeclareTask(CPU2Task2Subtask4);
DeclareTask(CPU2Task5Subtask8);
DeclareTask(CPU2Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  ActivateTask(CPU0Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 131); // 0
  ActivateTask(CPU0Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 98); // 0
  ActivateTask(CPU0Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 77); // 0
  SetEvent(CPU2Task5Subtask8,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  ActivateTask(CPU0Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 198); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 71); // 0
  SetEvent(CPU2Task2Subtask1,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 1); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 140); // 0
  ActivateTask(CPU1Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 27); // 0
  ActivateTask(CPU0Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 113); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 155); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 130); // 0
  SetEvent(CPU0Task3Subtask14,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 85); // 0
  ActivateTask(CPU2Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 22); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 162); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 86); // 0
  SetEvent(CPU2Task2Subtask4,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 198); // 0
  ActivateTask(CPU2Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  ActivateTask(CPU2Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 153); // 0
  ActivateTask(CPU0Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 44); // 0
  SetEvent(CPU0Task3Subtask2,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 173); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 144); // 0
  TerminateTask();

}
