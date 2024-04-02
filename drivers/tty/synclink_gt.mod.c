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
	{ 0x6dc87645, "param_array_ops" },
	{ 0xfaf4e469, "hdlc_start_xmit" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0x61a1d47b, "do_SAK" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x26c583c0, "alloc_hdlcdev" },
	{ 0x91715312, "sprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x8ccd8870, "tty_port_raise_dtr_rts" },
	{ 0xf3eb80b8, "tty_lock" },
	{ 0x88bed4e7, "tty_unlock" },
	{ 0x2a46fce3, "tty_port_carrier_raised" },
	{ 0xb4e217a3, "tty_hung_up_p" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x1e985899, "unregister_hdlc_device" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xabf2b1f4, "hdlc_open" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xaf2fc3cd, "tty_port_close_end" },
	{ 0x6525abf0, "tty_ldisc_flush" },
	{ 0x41f4f831, "tty_port_close_start" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x40150f16, "hdlc_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf571822b, "tty_ldisc_deref" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x58e9905f, "tty_ldisc_ref" },
	{ 0x509f625d, "consume_skb" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfeb59937, "hdlc_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf7d6636f, "current_task" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x41715c18, "seq_puts" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlc";

MODULE_ALIAS("pci:v000013C0d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000090sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4951AA5756ECA471567AF48");
MODULE_INFO(rhelversion, "8.0");
