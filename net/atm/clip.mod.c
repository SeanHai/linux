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
	{ 0x282806c1, "neigh_seq_next" },
	{ 0xb38c1502, "neigh_seq_stop" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb6587688, "register_atm_ioctl" },
	{ 0x5def83f9, "skb_push" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xaf737be8, "__neigh_create" },
	{ 0x865485d7, "neigh_lookup" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x3ae61869, "vcc_process_recv_queue" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x91715312, "sprintf" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x3b24fb5b, "vcc_insert_socket" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0xac9835f, "atm_charge" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x27e1a049, "printk" },
	{ 0x13806af1, "neigh_update" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0x41715c18, "seq_puts" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x88ab8522, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xed946a48, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xe22ef06e, "icmp_send" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x509f625d, "consume_skb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xd4cb0e33, "vcc_release_async" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xe5373ab1, "__neigh_for_each_release" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xfcc79717, "neigh_seq_start" },
	{ 0x5b0b522e, "arp_tbl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x43439345, "neigh_direct_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "33600CB0C1AB23E1B34AB86");
MODULE_INFO(rhelversion, "8.0");
