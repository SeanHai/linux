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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x261272bc, "remap_vmalloc_range" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x93184044, "v4l2_fh_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x63e0422c, "video_devdata" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x28318305, "snprintf" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe0024da3, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("usb:v174FpA311d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v05E1p0501d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "8C6E991909C2E67C2398AAF");
MODULE_INFO(rhelversion, "8.0");
