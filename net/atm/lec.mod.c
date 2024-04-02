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
	{ 0x93f0703, "unregister_netdev" },
	{ 0x88ab8522, "deregister_atm_ioctl" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xb6587688, "register_atm_ioctl" },
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x30a4d321, "br_fdb_test_addr_hook" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xea937c72, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x5def83f9, "skb_push" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x509f625d, "consume_skb" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x28318305, "snprintf" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x318f7969, "add_timer" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x3b24fb5b, "vcc_insert_socket" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x41715c18, "seq_puts" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xd4cb0e33, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "C83E6F6F5F41FFD8DD5706E");
MODULE_INFO(rhelversion, "8.0");
