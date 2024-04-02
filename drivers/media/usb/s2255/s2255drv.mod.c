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
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0x5b96593b, "vb2_fop_release" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0xa831d829, "vb2_ioctl_reqbufs" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xba1fd87e, "vb2_queue_init" },
	{ 0xf24e1f67, "vb2_vmalloc_memops" },
	{ 0xdf71f10b, "v4l2_ctrl_new_custom" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xe6478472, "_dev_info" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0xca72a3cb, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x28318305, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x40571b16, "__v4l2_ctrl_s_ctrl" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3C76B0B1DA1755B93F1883E");
MODULE_INFO(rhelversion, "8.0");
