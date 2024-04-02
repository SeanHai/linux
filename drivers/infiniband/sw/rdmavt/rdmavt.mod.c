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
	{ 0x317a8ad6, "flush_work" },
	{ 0xb93a52b0, "ib_rate_to_mbps" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x81348cf2, "node_to_cpumask_map" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x261272bc, "remap_vmalloc_range" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc081bf98, "rdma_port_get_link_layer" },
	{ 0xe9e8c57e, "ib_register_mad_agent" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfdc8c9b3, "bpf_trace_run3" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x86efc71c, "ib_free_send_mad" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6424b34f, "dma_virt_ops" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x9aadd701, "rdma_destroy_ah" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xcc20531d, "bpf_trace_run5" },
	{ 0x318f7969, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdd57e2b5, "percpu_ref_exit" },
	{ 0x32c5fa9d, "ib_unregister_mad_agent" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3dfc436e, "percpu_ref_kill_and_confirm" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x1415801b, "hrtimer_try_to_cancel" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x2e2a42c9, "percpu_ref_init" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "40359DBE94DF46C07CC583F");
MODULE_INFO(rhelversion, "8.0");
