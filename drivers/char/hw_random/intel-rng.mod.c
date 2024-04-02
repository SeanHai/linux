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
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xea77d22b, "stop_machine" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002671sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002450sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "862DE32043199028D9F176A");
MODULE_INFO(rhelversion, "8.0");
