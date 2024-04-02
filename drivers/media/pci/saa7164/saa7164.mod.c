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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0xc522215d, "video_device_release" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x91715312, "sprintf" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xd7e70a82, "video_device_alloc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0x57ad6881, "v4l2_fh_del" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0xeed87698, "v4l2_fh_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,dvb-core,tveeprom";

MODULE_ALIAS("pci:v00001131d00007164sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "742EEC004A295A9D8A17DD2");
MODULE_INFO(rhelversion, "8.0");
