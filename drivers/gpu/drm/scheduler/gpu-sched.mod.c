#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0xf7d6636f, "current_task" },
	{ 0x3394632, "dma_fence_init" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0xb8f48202, "dma_fence_signal" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf3ecdc68, "kthread_unpark" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xd2982156, "dma_fence_remove_callback" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0x1684b4ac, "dma_fence_default_wait" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x34749b73, "kthread_park" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0xb9d80e63, "sched_setscheduler" },
	{ 0x7ac7bf69, "dma_fence_add_callback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x11caddc7, "trace_seq_printf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "345504D56AD571561C11BFE");
MODULE_INFO(rhelversion, "8.0");
