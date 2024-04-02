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
	{ 0x6dc87645, "param_array_ops" },
	{ 0x15a89a18, "parport_unregister_driver" },
	{ 0x56e402f9, "__parport_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x4817185b, "i2c_setup_smbus_alert" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97c3aef6, "parport_claim_or_block" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9be4fb1a, "parport_register_dev_model" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe310d55, "parport_unregister_device" },
	{ 0xaff99d8e, "parport_release" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb595249a, "i2c_handle_smbus_alert" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport,i2c-algo-bit,i2c-smbus";


MODULE_INFO(srcversion, "665680A12234F51247426C0");
MODULE_INFO(rhelversion, "8.0");
