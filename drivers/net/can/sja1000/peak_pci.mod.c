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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x946bf5ab, "alloc_sja1000dev" },
	{ 0x524ff4c1, "register_sja1000dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x17325807, "free_sja1000dev" },
	{ 0xae1571d5, "unregister_sja1000dev" },
	{ 0xe6478472, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit,sja1000";

MODULE_ALIAS("pci:v0000001Cd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000000Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8B78F38F81A384816AE4AF3");
MODULE_INFO(rhelversion, "8.0");
