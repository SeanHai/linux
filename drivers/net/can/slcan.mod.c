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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x51526d35, "tty_register_ldisc" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x27e1a049, "printk" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x91715312, "sprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa622d224, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x317a8ad6, "flush_work" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0xcdea69c8, "tty_mode_ioctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1490894ABF0F49750B2D23D");
MODULE_INFO(rhelversion, "8.0");
