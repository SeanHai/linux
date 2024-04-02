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
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x88ab8522, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0xb6587688, "register_atm_ioctl" },
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5a921311, "strncmp" },
	{ 0x3ae61869, "vcc_process_recv_queue" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x27e1a049, "printk" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x5def83f9, "skb_push" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";


MODULE_INFO(srcversion, "15D8F44E5B63B659BA5F1BC");
MODULE_INFO(rhelversion, "8.0");
