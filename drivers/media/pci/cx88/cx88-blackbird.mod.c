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
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0xa831d829, "vb2_ioctl_reqbufs" },
	{ 0xa9a2392, "cx8802_unregister_driver" },
	{ 0x84fcda98, "cx8802_register_driver" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0x32702559, "cx88_vdev_init" },
	{ 0xba1fd87e, "vb2_queue_init" },
	{ 0x2dddb05a, "vb2_dma_sg_memops" },
	{ 0xc235c60d, "v4l2_ctrl_add_handler" },
	{ 0x7aa82573, "cx2341x_handler_init" },
	{ 0x44971bd3, "cx88_set_freq" },
	{ 0xa2aef7db, "cx8802_start_dma" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4e20798a, "cx2341x_handler_setup" },
	{ 0x8394210f, "cx2341x_handler_set_50hz" },
	{ 0x4fd92c0, "cx88_set_scale" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcb0905e7, "cx8802_get_driver" },
	{ 0x60ff540c, "cx8802_cancel_buffers" },
	{ 0x4b444abd, "cx2341x_handler_set_busy" },
	{ 0x27e1a049, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf56c742f, "cx88_querycap" },
	{ 0x91715312, "sprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x2add2578, "cx88_enum_input" },
	{ 0x9d51b636, "cx88_video_mux" },
	{ 0x70c46d60, "cx88_newstation" },
	{ 0x1870a1e4, "cx88_get_stereo" },
	{ 0xb934976c, "cx88_set_stereo" },
	{ 0x54efabd8, "cx88_set_tvnorm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8038b37c, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x28318305, "snprintf" },
	{ 0x63e0422c, "video_devdata" },
	{ 0x20121e18, "cx8802_buf_prepare" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xcccb6410, "cx8802_buf_queue" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,cx8802,cx88xx,videobuf2-dma-sg,cx2341x,cx8800,videobuf2-common,v4l2-common";


MODULE_INFO(srcversion, "1389FDE42C1C45BB7784200");
MODULE_INFO(rhelversion, "8.0");
