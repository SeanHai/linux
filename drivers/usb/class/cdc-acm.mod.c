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
	{ 0x701843ca, "idr_destroy" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0xd77fdbd5, "usb_get_from_anchor" },
	{ 0xfd51f909, "usb_autopm_get_interface_no_resume" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0xe6478472, "_dev_info" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x787b953, "idr_alloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0xf1f6a13c, "cdc_parse_cdc_header" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xe0024da3, "usb_put_intf" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x8ff84f09, "tty_standard_install" },
	{ 0xdf30c245, "idr_find" },
	{ 0x89b623c9, "tty_port_open" },
	{ 0x74ece01f, "tty_port_close" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0x8d47cfd6, "usb_autopm_get_interface_async" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9d43bf8, "tty_port_tty_hangup" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x91715312, "sprintf" },
	{ 0x982191fd, "tty_port_put" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x98004e1a, "tty_vhangup" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x4892a57, "usb_autopm_put_interface_async" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v076Dp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11CAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1965p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p3095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20DFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D91d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D92d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D93d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D95d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D96d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D97d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D99d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D9Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F9p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BBBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1576p03B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09D8p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CA6pA050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2912p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p042Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04D8d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04C9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0419d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p044Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0001d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0475d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0508d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0418d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0425d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0486d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04DFd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0445d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p042Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p048Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0420d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04E6d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04B2d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0134d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p046Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p002Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0088d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00FCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00B0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00ABd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0481d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0007d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0071d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04F0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0070d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0099d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0128d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p008Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00A0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p007Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0094d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p003Ad*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0108d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01F5d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02E3d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0178d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p010Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02D9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0223d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0275d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p026Cd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0154d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04CEd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D4d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0302d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0335d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p03CDd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v04E7p6651d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v03EBp0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04D8p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p685Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Bp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06in*");
MODULE_ALIAS("usb:v1519p0452d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D6F3690B2AD0AE3D3DBB8EB");
MODULE_INFO(rhelversion, "8.0");
