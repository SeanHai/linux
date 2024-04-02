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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0x70c46d60, "cx88_newstation" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xdc3ef0f1, "v4l2_i2c_new_subdev" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x7aa125d3, "cx88_sram_channel_setup" },
	{ 0x91715312, "sprintf" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x240d6d5d, "cx88_sram_channel_dump" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xc6cb5ea1, "cx88_set_tvaudio" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0xb934976c, "cx88_set_stereo" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x93184044, "v4l2_fh_release" },
	{ 0x1ea89030, "cx88_risc_buffer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8cbfa361, "vb2_plane_cookie" },
	{ 0x40571b16, "__v4l2_ctrl_s_ctrl" },
	{ 0xf6cfe64d, "cx88_ir_start" },
	{ 0xce71a0eb, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5b96593b, "vb2_fop_release" },
	{ 0x54efabd8, "cx88_set_tvnorm" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0xcfbfafb6, "cx88_ir_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1870a1e4, "cx88_get_stereo" },
	{ 0x5f5d0a93, "cx88_core_get" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x34fd1c2e, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x904b8696, "cx88_audio_thread" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xb044101, "cx88_core_put" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x32702559, "cx88_vdev_init" },
	{ 0xab32af80, "cx88_shutdown" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x4fd92c0, "cx88_set_scale" },
	{ 0x30b5df6b, "v4l2_i2c_new_subdev_board" },
	{ 0xc235c60d, "v4l2_ctrl_add_handler" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x79173a99, "cx88_wakeup" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0x7350d3da, "cx88_reset" },
	{ 0x2dddb05a, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xba1fd87e, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,cx88xx,v4l2-common,videobuf2-common,videobuf2-dma-sg";

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "873C0BAB8353DC8F633B438");
MODULE_INFO(rhelversion, "8.0");
