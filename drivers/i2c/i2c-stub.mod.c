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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x27e1a049, "printk" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8B4567490E1AB603D192A41");
MODULE_INFO(rhelversion, "8.0");
