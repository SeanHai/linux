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
	{ 0xa831d829, "vb2_ioctl_reqbufs" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0xe042a9a1, "v4l2_ctrl_g_ctrl" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0xf24e1f67, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xca72a3cb, "vb2_plane_vaddr" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc84a019d, "vb2_ioctl_create_bufs" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x40571b16, "__v4l2_ctrl_s_ctrl" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x5b96593b, "vb2_fop_release" },
	{ 0xd70857aa, "vb2_queue_error" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x28318305, "snprintf" },
	{ 0xe8c84774, "vb2_ioctl_expbuf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x8024e827, "v4l2_device_put" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xba1fd87e, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common";


MODULE_INFO(srcversion, "B4F2E1D402AC269258F8D95");
MODULE_INFO(rhelversion, "8.0");
