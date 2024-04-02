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
	{ 0x51526d35, "tty_register_ldisc" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdebf3af8, "tty_chars_in_buffer" },
	{ 0x8dc974cb, "dev_trans_start" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x318f7969, "add_timer" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x91715312, "sprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa622d224, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x317a8ad6, "flush_work" },
	{ 0xcdea69c8, "tty_mode_ioctl" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xf7d6636f, "current_task" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "9564AB256535BF3CAD9B599");
MODULE_INFO(rhelversion, "8.0");
