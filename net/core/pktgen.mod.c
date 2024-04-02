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
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x29361773, "complete" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xd67a6d63, "hrtimer_init_sleeper" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x1000e51, "schedule" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8928a0cf, "__put_task_struct" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x1e6526cc, "udp4_hwcsum" },
	{ 0x2124474, "ip_send_check" },
	{ 0x5def83f9, "skb_push" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xd2c9e900, "proc_remove" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x764415ca, "kthread_bind" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xdaa1dda5, "proc_create" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0x999e8297, "vfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb8099651, "proc_create_data" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0xe914e41e, "strcpy" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x98c2d757, "__xfrm_state_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x618911fc, "numa_node" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x3f3c4880, "xfrm_stateonly_find" },
	{ 0xa7705d0b, "xfrm_state_lookup_byspi" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf7d6636f, "current_task" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x28318305, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x652032cb, "mac_pton" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x9166fada, "strncpy" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0xf99d347e, "node_states" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x27e1a049, "printk" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x41715c18, "seq_puts" },
	{ 0xc7f4b92, "single_open" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "60158603F36C995FF46857D");
MODULE_INFO(rhelversion, "8.0");
