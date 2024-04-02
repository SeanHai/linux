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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x88f31ace, "dvb_module_probe" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xe7ddb3d3, "dvb_register_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd71244be, "dvb_generic_release" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2df52479, "device_create" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xcdc0d85f, "dvb_unregister_device" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe1887eed, "dvb_module_release" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xe6478472, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3ad875fa, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("pci:v0000DD01d00000002sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000003sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000005sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000006sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000007sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000008sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000009sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000011sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000012sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000013sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000201sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000203sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000210sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000220sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000320sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000321sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000322sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000323sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000328sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000329sv0000DD01sd*bc*sc*i*");

MODULE_INFO(srcversion, "B046D4F9F52D0CDB7D03766");
MODULE_INFO(rhelversion, "8.0");
