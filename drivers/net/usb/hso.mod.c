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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x8ca0ad51, "tty_port_register_device_attr" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x28318305, "snprintf" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xd9d43bf8, "tty_port_tty_hangup" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x52f8c71b, "tty_buffer_request_room" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x60d9478a, "tty_port_tty_set" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe914e41e, "strcpy" },
	{ 0x91715312, "sprintf" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x509f625d, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x55e5dd81, "usb_queue_reset_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";

MODULE_ALIAS("usb:v0AF0p6711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6751d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6771d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6791d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6911d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6971d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD157d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC100d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D3BF4EBD542645891DF3CB2");
MODULE_INFO(rhelversion, "8.0");
