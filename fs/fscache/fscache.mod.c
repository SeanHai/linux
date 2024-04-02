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
	{ 0x2cec6038, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xea2b701b, "up_read" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x41715c18, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xa26d9b4f, "workqueue_congested" },
	{ 0xbd133f8a, "pagevec_lookup_range" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd89826a9, "radix_tree_tag_get" },
	{ 0xfdc8c9b3, "bpf_trace_run3" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91185511, "down_read" },
	{ 0xc985b4ca, "kobject_create_and_add" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd8ded085, "radix_tree_maybe_preload" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xf31b3fd1, "workqueue_set_max_active" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcc20531d, "bpf_trace_run5" },
	{ 0x929c1a90, "radix_tree_gang_lookup_tag" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa79f6dfa, "radix_tree_delete" },
	{ 0xad9901ae, "bit_waitqueue" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x7eb71a81, "radix_tree_tag_set" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2dc7de88, "__radix_tree_insert" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x576bf033, "radix_tree_tag_clear" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9105cd50, "__pagevec_release" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x495d3587, "kernel_kobj" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6839a855, "bpf_trace_run4" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "52B756EABC11EA93AD40638");
MODULE_INFO(rhelversion, "8.0");
