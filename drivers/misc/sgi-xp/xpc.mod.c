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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xaa5aee1c, "uv_bios_mq_watchlist_alloc" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x81348cf2, "node_to_cpumask_map" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1e5a5f22, "sn_partition_id" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbdb2dfd5, "uv_bios_reserved_page_pa" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x39046c7a, "xpc_clear_interface" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd3d2bf04, "gru_free_message" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x64ba5017, "xp_pa" },
	{ 0x50a25b70, "__uv_cpu_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8bb699, "gru_get_next_message" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x68d27065, "xp_expand_memprotect" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x48e62c9f, "xp_region_size" },
	{ 0xed1d3813, "xp_socket_pa" },
	{ 0x71df4aa3, "set_cpus_allowed_ptr" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x12333991, "xpc_set_interface" },
	{ 0xcca03002, "cpu_bit_bitmap" },
	{ 0x121d958a, "unregister_die_notifier" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x67dcd76b, "uv_setup_irq" },
	{ 0xe6478472, "_dev_info" },
	{ 0x618911fc, "numa_node" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ad5ceb1, "__uv_hub_info_list" },
	{ 0x3506012f, "xpc_registrations" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xf99d347e, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xeed7d505, "gru_send_message_gpa" },
	{ 0x8dc51bdd, "gru_create_message_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x5d9317d7, "uv_teardown_irq" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x6285dfe8, "xp_cpu_to_nasid" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x1018eee0, "xp_restrict_memprotect" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xdf81924d, "uv_bios_mq_watchlist_free" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xp,gru";


MODULE_INFO(srcversion, "C64BFA78C611B463822F760");
MODULE_INFO(rhelversion, "8.0");
