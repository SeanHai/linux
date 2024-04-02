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
	{ 0x402b8281, "__request_module" },
	{ 0xfc6380e5, "dvb_ringbuffer_free" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebbc2d9b, "dvb_ringbuffer_init" },
	{ 0xcb850e4, "saa7146_vfree_destroy_pgtable" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xb816ec49, "saa7146_vmalloc_build_pgtable" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xbbe233eb, "saa7146_setgpio" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xe7ddb3d3, "dvb_register_device" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x91a6794b, "dvb_ringbuffer_read_user" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xea8c7f8c, "dma_direct_sync_sg_for_cpu" },
	{ 0xd0c1b031, "proc_set_size" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x198af494, "saa7146_stop_preview" },
	{ 0xbfa753d4, "saa7146_set_hps_source_and_sync" },
	{ 0x6263e02d, "strncpy_from_user" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x6181aec0, "dvb_ringbuffer_flush_spinlock_wakeup" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x4e033fe1, "ttpci_eeprom_parse_mac" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa8abf65a, "saa7146_register_device" },
	{ 0x2f5cdf80, "dvb_ringbuffer_write" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x2105444b, "default_llseek" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xbfc578de, "saa7146_unregister_device" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd71244be, "dvb_generic_release" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xcdc0d85f, "dvb_unregister_device" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3bbb8fdc, "saa7146_start_preview" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfb09f39a, "dvb_ringbuffer_read" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x447aed2b, "saa7146_register_extension" },
	{ 0x809aa3a5, "dvb_generic_ioctl" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x50509301, "input_enable_softrepeat" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x3ad875fa, "dvb_generic_open" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe138ce6b, "dvb_ringbuffer_avail" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x923bebb4, "saa7146_vv_release" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3352dd2, "dvb_ringbuffer_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x690a3dde, "saa7146_i2c_adapter_prepare" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x28318305, "snprintf" },
	{ 0x12b82bfb, "saa7146_wait_for_debi_done" },
	{ 0xdaa1dda5, "proc_create" },
	{ 0x79e92510, "saa7146_vv_init" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4e7567f4, "saa7146_unregister_extension" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,saa7146,saa7146_vv,ttpci-eeprom";

MODULE_ALIAS("pci:v00001131d00007146sv0000110Asd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000006bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001002bc*sc*i*");

MODULE_INFO(srcversion, "40CD77BBEA0048BE7985E57");
MODULE_INFO(rhelversion, "8.0");
