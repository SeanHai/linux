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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xe7ddb3d3, "dvb_register_device" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4e94b037, "fw_bus_type" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0xf6e0d4e, "fw_iso_context_start" },
	{ 0x1cb03603, "fw_iso_context_queue_flush" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd71244be, "dvb_generic_release" },
	{ 0x5a921311, "strncmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xd9eb5f45, "fw_iso_buffer_destroy" },
	{ 0xcdc0d85f, "dvb_unregister_device" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6478472, "_dev_info" },
	{ 0x8ee5612c, "fw_iso_context_queue" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x809aa3a5, "dvb_generic_ioctl" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ad875fa, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf49649cb, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf15eb651, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xec88350c, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd305a58, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xc3a6e1c1, "crc32_be" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2a7e08d3, "fw_iso_buffer_init" },
	{ 0x807ab5cb, "fw_run_transaction" },
	{ 0x994a4ced, "fw_iso_context_destroy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,firewire-core";

MODULE_ALIAS("ieee1394:ven00001287mo00000024sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000025sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000026sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000034sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000035sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000036sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "13405D95C2C65ED1AA0DEAB");
MODULE_INFO(rhelversion, "8.0");
