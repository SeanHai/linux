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
	{ 0xf9a482f9, "msleep" },
	{ 0x88f31ace, "dvb_module_probe" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xacdd1296, "dvb_frontend_reinitialise" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0xe1887eed, "dvb_module_release" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xe6478472, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x1f37cca7, "schedule_hrtimeout_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("pci:v000010EEd0000211Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000222Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "75D039C279862C3C04E12F4");
MODULE_INFO(rhelversion, "8.0");
