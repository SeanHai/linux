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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x801ccfdf, "scsi_is_fc_rport" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9300507b, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9166fada, "strncpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x79fe1b07, "init_uts_ns" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb794cada, "fc_host_post_event" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd78d3880, "fc_remote_port_delete" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x6a244503, "mempool_create" },
	{ 0xea5d4033, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x85ce3360, "fc_remote_port_add" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_fc";


MODULE_INFO(srcversion, "28AA6F613D73A3BBD1B7CA3");
MODULE_INFO(rhelversion, "8.0");
